
#ifndef PYTHONIC_COMPLEX_H
#define PYTHONIC_COMPLEX_H
namespace pythonic {
    namespace _complex_ { /* to avoid conflict with the complex intrinsic */
        template<class T>
            std::complex<T> conjugate(std::complex<T> const &c) {
                return std::conj(c);
            }
        PROXY(pythonic::_complex_, conjugate);
    }
#define COMPLEX_OPERATOR(type, lop, op)\
    std::complex<double> lop(type self, std::complex<double> const& other) {\
        return std::complex<double>(self,0.) op other  ;\
    }\
    std::complex<double> lop(std::complex<double> const& other, type self) {\
        return other op std::complex<double>(self,0.)  ;\
    }

    COMPLEX_OPERATOR(long,operator+,+)
    COMPLEX_OPERATOR(long,operator-,-)
    COMPLEX_OPERATOR(long,operator*,*)
    COMPLEX_OPERATOR(long,operator/,/)

    COMPLEX_OPERATOR(double,operator+,+)
    COMPLEX_OPERATOR(double,operator-,-)
    COMPLEX_OPERATOR(double,operator*,*)
    COMPLEX_OPERATOR(double,operator/,/)

#undef COMPLEX_OPERATOR
}
#endif