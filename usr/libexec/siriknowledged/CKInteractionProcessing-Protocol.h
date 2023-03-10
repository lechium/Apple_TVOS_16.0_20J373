//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class INInteraction, NSPredicate, NSSet, NSString, NSUUID;

@protocol CKInteractionProcessing <NSObject>
- (NSSet *)supportedTypes;
- (NSPredicate *)bundleIdPredicate;
- (_Bool)supportsSiriDonations;

@optional
- (_Bool)processInteraction:(INInteraction *)arg1 dkEventUUID:(NSUUID *)arg2;
- (_Bool)processInteraction:(INInteraction *)arg1 bundleId:(NSString *)arg2;
@end

