//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CSDDirtyCallManager : NSObject
{
    MISSING_TYPE *callChanged;	// 8 = 0x8
    MISSING_TYPE *queue;	// 24 = 0x18
    MISSING_TYPE *dirtyCallsArray;	// 32 = 0x20
    MISSING_TYPE *dirtyCallsSet;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0040000000206d60
- (id)init;	// IMP=0x0010000000206d00
- (void)add:(id)arg1;	// IMP=0x0010000000206980
@property(nonatomic, copy) CDUnknownBlockType callChanged;

@end

