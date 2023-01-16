//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccount.h>

@class NSDate;

@interface ACAccount (AppleTVServices)
- (_Bool)_tvs_performBlock:(CDUnknownBlockType)arg1 authenticationExpiration:(double)arg2 error:(id *)arg3;	// IMP=0x00300000000631c3
- (_Bool)tvs_setiCloudPhotoLibraryEnabled:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0030000000063032
@property(readonly, nonatomic) _Bool tvs_iCloudPhotoLibraryEnabled;
- (_Bool)tvs_setMyPhotoStreamEnabled:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0030000000062e47
@property(readonly, nonatomic) _Bool tvs_isPrimaryAppleAccount;
@property(readonly, nonatomic) _Bool tvs_isAppleAccount;
@property(readonly, nonatomic) _Bool tvs_myPhotoStreamEnabled;
- (_Bool)tvs_setSharedPhotoStreamEnabled:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0030000000062c00
@property(readonly, nonatomic) _Bool tvs_sharedPhotoStreamEnabled;
@property(retain, nonatomic, setter=tvs_setLastAuthenticationDate:) NSDate *tvs_lastAuthenticationDate;
@end

