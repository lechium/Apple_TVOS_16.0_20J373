//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIDetector.h"

@class CIContext, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CIRectangleDetector : CIDetector
{
    CIContext *context;	// 8 = 0x8
    NSMutableDictionary *featureOptions;	// 16 = 0x10
}

@property(retain, nonatomic) CIContext *context; // @synthesize context;
- (id)featuresInImage:(id)arg1 options:(id)arg2;	// IMP=0x0000000000124d74
- (id)featuresInImage:(id)arg1;	// IMP=0x0000000000124d60
- (void)dealloc;	// IMP=0x0000000000124d22
- (void)releaseResources;	// IMP=0x0000000000124ceb
- (id)initWithContext:(id)arg1 options:(id)arg2;	// IMP=0x0000000000124ab0

@end

