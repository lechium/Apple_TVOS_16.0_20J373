//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _HBApplicationIconFileMetadata : NSObject
{
    double _imageScale;	// 8 = 0x8
    NSArray *_layers;	// 16 = 0x10
    struct CGSize _imageSize;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000007082a
- (void).cxx_destruct;	// IMP=0x0000000000070883
@property(retain, nonatomic) NSArray *layers; // @synthesize layers=_layers;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000706eb
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007053c

@end
