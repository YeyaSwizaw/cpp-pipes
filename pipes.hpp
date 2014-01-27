#include <string>
#include <iostream>
#include <functional>

template<typename T>
void operator|(T lhs, void (*rhs)(T)) {
	rhs(lhs);

} // void operator|(T lhs, void (*rhs)(T));

template<typename T, typename R>
R operator|(T lhs, R (*rhs)(T)) {
	return rhs(lhs);

} // R operator|(T lhs, R (*rhs)(T));

template<typename T, typename R>
R operator|(T lhs, std::function<R(T)> rhs) {
	return rhs(lhs);

} // R operator|(T lhs, std::function<R(T)>);
