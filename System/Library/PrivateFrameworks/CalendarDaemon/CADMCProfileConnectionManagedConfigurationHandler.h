//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCProfileConnection;

__attribute__((visibility("hidden")))
@interface CADMCProfileConnectionManagedConfigurationHandler : NSObject
{
    MCProfileConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000035005
@property(readonly, nonatomic) MCProfileConnection *connection; // @synthesize connection=_connection;
- (id)filteredOpenInOriginatingAccounts:(id)arg1 targetAppBundleID:(id)arg2 targetAccountManagement:(int)arg3;	// IMP=0x0000000000034f5c
- (id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(int)arg3;	// IMP=0x0000000000034ebd
- (_Bool)mayShowLocalAccountsForTargetBundleID:(id)arg1 targetAccountManagement:(int)arg2;	// IMP=0x0000000000034e40
- (_Bool)mayShowLocalAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2;	// IMP=0x0000000000034dc3
- (_Bool)isOpenInRestrictionInEffect;	// IMP=0x0000000000034d7f
- (id)initWithMCProfileConnection:(id)arg1;	// IMP=0x0000000000034d14

@end

