//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/NSUserActivity.h>

@class NSString;

@interface NSUserActivity (TelephonyUtilities)
+ (_Bool)_isActivityTypeAllowedForJoinRequest:(id)arg1;	// IMP=0x002000000004eddf
+ (_Bool)_isActivityTypeAllowedForDialRequest:(id)arg1;	// IMP=0x002000000004edc0
+ (id)makeActivityWithIntent:(id)arg1 joinRequestAttachment:(id)arg2;	// IMP=0x002000000004e732
+ (id)makeActivityWithIntent:(id)arg1 dialRequestAttachment:(id)arg2;	// IMP=0x002000000004e4bf
@property(readonly, copy, nonatomic) NSString *tu_dynamicIdentifier;
- (id)joinRequestAttachment;	// IMP=0x001000000004eb4f
- (id)dialRequestAttachment;	// IMP=0x001000000004e9a5
@end

