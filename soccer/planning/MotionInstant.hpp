#pragma once

#include <Geometry2d/Point.hpp>

namespace Planning {

/**
 * This class represents a robot's motion "state" at a given time, including
 * position and velocity.
 */
struct MotionInstant {
    MotionInstant(Geometry2d::Point pos = {0, 0},
                  Geometry2d::Point vel = {0, 0})
        : pos(pos), vel(vel) {}

    Geometry2d::Point pos;
    Geometry2d::Point vel;

    friend std::ostream& operator<<(std::ostream& stream,
                                    const MotionInstant& instant) {
        return stream << "MotionInstant(pos=" << instant.pos
                      << ", vel=" << instant.vel << ")";
    }
};

}  // namespace Planning
