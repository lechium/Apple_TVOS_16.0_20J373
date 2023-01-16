//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, _HBApplicationIconFileMetadata;

__attribute__((visibility("hidden")))
@interface HBApplicationIconFile : NSObject
{
    NSData *_data;	// 8 = 0x8
    _HBApplicationIconFileMetadata *_metadata;	// 16 = 0x10
    struct {
        unsigned char version;
        unsigned char _unused[7];
        unsigned long long metadataStart;
        unsigned long long metadataLength;
        unsigned long long flattenedImageStart;
        unsigned long long flattenedImageLength;
        unsigned long long radiosityImageStart;
        unsigned long long radiosityImageLength;
    } _header;	// 24 = 0x18
}

+ (id)_fileDataWithMetadataData:(id)arg1 flattenedImageData:(id)arg2 radiosityImageData:(id)arg3;	// IMP=0x006000000007168d
+ (id)_imageDataWithImage:(struct CGImage *)arg1 extraOptions:(id)arg2;	// IMP=0x006000000007151e
+ (id)iconFileDataWithApplication:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000070ccc
- (void).cxx_destruct;	// IMP=0x00000000000718e8
@property(readonly, nonatomic, getter=_metadata) _HBApplicationIconFileMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic, getter=_header) CDStruct_06537ce9 header; // @synthesize header=_header;
@property(readonly, nonatomic, getter=_data) NSData *data; // @synthesize data=_data;
- (id)radiosityImage;	// IMP=0x0000000000071457
@property(readonly, nonatomic) NSArray *layers;
@property(readonly, nonatomic) double imageScale;
@property(readonly, nonatomic) struct CGSize imageSize;
- (id)flattenedImage;	// IMP=0x0000000000071296
- (id)description;	// IMP=0x0000000000070ac5
- (id)initWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000070893

@end

