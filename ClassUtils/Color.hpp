//
// Created by diguie_t on 03/05/2017.
//

#ifndef VULKAN_COLOR_HPP
#define VULKAN_COLOR_HPP

typedef union   s_color {
    uint32_t full;
    uint8_t argb[4];
}               t_color;

typedef struct  s_image {
    uint32_t  	 width;
    uint32_t  	 height;
    uint8_t  	 bytes_per_pixel;
    uint8_t 	 pixel_data[349 * 1 * 4 + 1];
}               t_image;

class Color {
private:
    static const t_image _image;
    const t_color *getColor(unsigned int at) const;
    const t_color &getColor(unsigned int min, unsigned int max, unsigned int val);
public:
};


#endif //VULKAN_COLOR_HPP
