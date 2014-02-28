#ifndef PIPES_PIPES_HPP
#define PIPES_PIPES_HPP

template<typename T, typename F>
auto operator|(T lhs, F rhs) -> decltype(rhs(lhs)) {
    return rhs(lhs);

} // auto operator||(T lhs, F rhs) -> decltype(rhs(lhs));

#endif // PIPES_PIPES_HPP
