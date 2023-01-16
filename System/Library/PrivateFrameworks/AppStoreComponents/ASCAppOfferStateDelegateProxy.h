//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol ASCAppOfferStateDelegate;

__attribute__((visibility("hidden")))
@interface ASCAppOfferStateDelegateProxy : NSObject
{
    id <ASCAppOfferStateDelegate> _target;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000b777
@property(readonly, nonatomic) __weak id <ASCAppOfferStateDelegate> target; // @synthesize target=_target;
- (void)offer:(id)arg1 didChangeStatusText:(id)arg2;	// IMP=0x000000000000b5ec
- (void)offer:(id)arg1 didChangeState:(id)arg2 withMetadata:(id)arg3 flags:(long long)arg4;	// IMP=0x000000000000b48e
- (id)initWithTarget:(id)arg1;	// IMP=0x000000000000b42a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

