//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VNSceneprint;

__attribute__((visibility("hidden")))
@interface VCPSceneprintDescriptor : NSObject
{
    VNSceneprint *_sceneprint;	// 8 = 0x8
}

+ (id)descriptorWithData:(id)arg1;	// IMP=0x00100000000acb07
+ (id)descriptorWithImage:(struct __CVBuffer *)arg1;	// IMP=0x00100000000acad1
+ (int)preferredPixelFormat;	// IMP=0x00100000000acac6
+ (_Bool)usePHAssetData;	// IMP=0x00100000000acabe
- (void).cxx_destruct;	// IMP=0x00000000000ad386
- (int)computeDistance:(float *)arg1 toDescriptor:(id)arg2;	// IMP=0x00000000000ad2a4
- (id)serialize;	// IMP=0x00000000000ad27c
- (id)initWithData:(id)arg1;	// IMP=0x00000000000ad0ba
- (id)initWithImage:(struct __CVBuffer *)arg1;	// IMP=0x00000000000acb65

@end
