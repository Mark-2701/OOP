#pragma once
#include <string>
#include <format>
#include <iostream>

template<typename T>
class Vector2T {
private:
    T x;
    T y;
    std::string name;

public:
    Vector2T() : x(0), y(0), name("") {}

    Vector2T(T x, T y) : x(x), y(y), name("") {}

    Vector2T(T x, T y, const std::string& name) : x(x), y(y), name(name) {}

    T getX() const { return x; }
    void setX(T x) { this->x = x; }

    T getY() const { return y; }
    void setY(T y) { this->y = y; }

    std::string getName() const { return name; }
    void setName(const std::string& name) { this->name = name; }

    std::string toString() const {
        if (name.empty()) {
            return std::format("({0}, {1})", x, y);
        }
        return std::format("{0}: ({1}, {2})", name, x, y);
    }
};