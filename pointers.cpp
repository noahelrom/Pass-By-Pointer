bool splitTime(int totalSeconds, int* hours, int* minutes, int* seconds) {
    if (totalSeconds < 0) {
        return false;
    }

    // Calculate hours, minutes, and seconds
    if (hours != nullptr)
        *hours = totalSeconds / 3600;
    if (minutes != nullptr)
        *minutes = (totalSeconds % 3600) / 60;
    if (seconds != nullptr)
        *seconds = totalSeconds % 60;
    return true;
}

int* middleOf(int* a, int* b, int* c) {
    if (a == nullptr || b == nullptr || c == nullptr) {
        return nullptr;
    }

    // Check if a is the middle value
    if ((*a <= *b && *a >= *c) || (*a >= *b && *a <= *c)) {
        return a;
    // Check if b is the middle value
    } else if ((*b <= *a && *b >= *c) || (*b >= *a && *b <= *c)) {
        return b;
    } else {
        return c;
    }
}