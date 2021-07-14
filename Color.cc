#include "Color.hh"

ColorTranslator::ColorTranslator() {
    m_name_enum_map = {};
    registerColorName(ColorName::default_color, ColorCode_foreground_lightgrey_background_black);
}

ColorTranslator::~ColorTranslator() {
}

ColorTranslator* ColorTranslator::m_instance = NULL;

void ColorTranslator::registerColorName(ColorName color_name, ColorCode color_enum) {
    if (!isColorNameExist(color_name)) {
        m_name_enum_map.insert(std::pair<ColorName, ColorCode>(color_name, color_enum));
    }
}

bool ColorTranslator::ColorNameExists(ColorName color_name) {
    std::map<ColorName, ColorCode>::iterator iter = m_name_enum_map.find(color_name);
    if (iter == m_name_enum_map.end()) {
        return false;
    }
    else {
        return true;
    }
}

ColorCode ColorTranslator::toColorCode(ColorName color_name) {
    return m_name_enum_map[color_name];
}
