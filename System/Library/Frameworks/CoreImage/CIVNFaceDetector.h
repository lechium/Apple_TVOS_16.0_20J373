//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIDetector.h"

@class CIContext;

__attribute__((visibility("hidden")))
@interface CIVNFaceDetector : CIDetector
{
    CIContext *context;	// 8 = 0x8
}

@property(readonly, retain) CIContext *context; // @synthesize context;
- (void)dealloc;	// IMP=0x0000000000176c1d
- (id)featuresInImage:(id)arg1 options:(id)arg2;	// IMP=0x0000000000175b60
- (id)initWithContext:(id)arg1 options:(id)arg2;	// IMP=0x0000000000175aed

@end

