//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CKDCancelTokenGroup : NSObject
{
    NSMutableArray *_cancelTokens;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000033b0d4
@property(retain, nonatomic) NSMutableArray *cancelTokens; // @synthesize cancelTokens=_cancelTokens;
- (void)cancel;	// IMP=0x000000000033aef1
- (void)removeAllCancelTokens;	// IMP=0x000000000033ae60
- (void)removeCancelToken:(id)arg1;	// IMP=0x000000000033ada8
- (void)addCancelToken:(id)arg1 withOperation:(id)arg2;	// IMP=0x000000000033ac9c
- (id)init;	// IMP=0x000000000033ac46

@end

