//
//     Generated by class-dump 3.5 (64 bit) (forked by @manicmaniac) (Debug version compiled Jun  9 2022 00:51:00).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MISSING_TYPE, UIImage;

__attribute__((visibility("hidden")))
@interface VTKBitmapContext : NSObject
{
    struct CGColorSpace *_colorSpace;
    unsigned long long _contextType;
    struct CGContext *_CGContext;
    void *_CGContextDataBytes;
    unsigned long long _CGContextDataBytesLength;
    double _width;
    double _height;
    double _scale;
    unsigned long long _bytesPerPixel;
    unsigned long long _bytesPerRow;
}

+ (id)contextType:(unsigned long long)arg1 width:(double)arg2 height:(double)arg3 scale:(double)arg4;
@property(readonly) unsigned long long bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property(readonly) unsigned long long bytesPerPixel; // @synthesize bytesPerPixel=_bytesPerPixel;
@property(readonly) double scale; // @synthesize scale=_scale;
@property(readonly) double height; // @synthesize height=_height;
@property(readonly) double width; // @synthesize width=_width;
@property(readonly) unsigned long long CGContextDataBytesLength; // @synthesize CGContextDataBytesLength=_CGContextDataBytesLength;
@property(readonly) void *CGContextDataBytes; // @synthesize CGContextDataBytes=_CGContextDataBytes;
@property(readonly) struct CGContext *CGContext; // @synthesize CGContext=_CGContext;
- (void *)dataAtPixel:(struct VTKPoint)arg1;
- (void)_draw16BitColor:(id)arg1 at:(MISSING_TYPE **)arg2;
- (void)_draw8BitColor:(id)arg1 at:(char *)arg2;
- (void)drawColor:(id)arg1 at:(void *)arg2;
- (id)colorForAntiAliased;
- (id)colorForSame;
- (id)colorForDifferent;
- (id)_16BitColor:(MISSING_TYPE **)arg1;
- (id)_8BitColor:(char *)arg1;
- (id)colorAt:(void *)arg1;
@property(readonly, nonatomic) UIImage *image;
@property(readonly) unsigned long long pixelHeight;
@property(readonly) unsigned long long pixelWidth;

- (id)initWithColorSpaceName:(struct __CFString *)arg1
                 contextType:(unsigned long long)arg2
                       width:(double)arg3
                      height:(double)arg4
                       scale:(double)arg5
            bitsPerComponent:(unsigned long long)arg6
               bytesPerPixel:(unsigned long long)arg7
                  bitmapInfo:(unsigned int)arg8;
@end

