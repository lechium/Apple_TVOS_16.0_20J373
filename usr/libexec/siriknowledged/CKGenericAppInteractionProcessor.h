//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKGenericAppInteractionProcessor : NSObject
{
}

- (_Bool)processInteraction:(id)arg1 bundleId:(id)arg2;	// IMP=0x002000000000a499
- (id)supportedTypes;	// IMP=0x001000000000a479
- (id)bundleIdPredicate;	// IMP=0x001000000000a45b
- (_Bool)supportsSiriDonations;	// IMP=0x001000000000a453

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
