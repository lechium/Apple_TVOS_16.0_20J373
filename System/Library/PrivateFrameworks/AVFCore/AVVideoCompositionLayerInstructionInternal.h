//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVVideoCompositionLayerInstructionInternal : NSObject
{
    int trackID;	// 8 = 0x8
    NSMutableArray *transformRamps;	// 16 = 0x10
    NSMutableArray *opacityRamps;	// 24 = 0x18
    NSMutableArray *cropRectangleRamps;	// 32 = 0x20
}

@end

