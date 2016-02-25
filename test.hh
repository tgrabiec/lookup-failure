#pragma once

namespace ser {

template<typename T>
void skip(input& v, boost::type<T> t) {
    deserialize(v, t);
}

}
