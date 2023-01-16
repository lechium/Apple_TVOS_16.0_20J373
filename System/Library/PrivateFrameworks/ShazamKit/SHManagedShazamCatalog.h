//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol SHMatcher;

__attribute__((visibility("hidden")))
@interface SHManagedShazamCatalog
{
    _Bool _sendNotifications;	// 8 = 0x8
    id <SHMatcher> _daemonMatcher;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000ee99
@property(retain, nonatomic) id <SHMatcher> daemonMatcher; // @synthesize daemonMatcher=_daemonMatcher;
@property(nonatomic) _Bool sendNotifications; // @synthesize sendNotifications=_sendNotifications;
- (id)_createMatcher;	// IMP=0x000000000000eddc
- (void)stop;	// IMP=0x000000000000ed42
- (void)startMatchingUntilResultFound;	// IMP=0x000000000000ecbc
- (void)startMatchingUntilDeadline:(id)arg1;	// IMP=0x000000000000ec12
- (void)startMatching;	// IMP=0x000000000000eb5e
- (void)startOneMatchAttempt;	// IMP=0x000000000000ead8
- (id)_initWithInstallationID:(id)arg1;	// IMP=0x000000000000eaa9
- (id)init;	// IMP=0x000000000000ea2e

@end
