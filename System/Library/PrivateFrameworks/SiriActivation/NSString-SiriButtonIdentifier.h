//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (SiriButtonIdentifier)
+ (id)stringWithSiriButtonIdentifier:(long long)arg1;	// IMP=0x0080000000004294
+ (id)stringWithSiriPresentationIdentifier:(long long)arg1;	// IMP=0x008000000002061a
+ (id)stringWithSiriPresentationActivationCancelReason:(unsigned long long)arg1;	// IMP=0x00800000000207b1
+ (id)stringWithSiriHomeAffordanceSuppression:(long long)arg1;	// IMP=0x00800000000209b6
+ (id)stringWithSiriActivationEventType:(long long)arg1;	// IMP=0x0080000000020cd0
+ (id)stringWithSiriSpotlightContextSource:(long long)arg1;	// IMP=0x0080000000031988
- (long long)siriPresentationIdentifier;	// IMP=0x0010000000020662
- (unsigned long long)cancelReason;	// IMP=0x00100000000207d5
@end

