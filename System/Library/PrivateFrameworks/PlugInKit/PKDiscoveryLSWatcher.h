//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PKDiscoveryDriver;
@protocol PKApplicationWorkspaceProxy;

@interface PKDiscoveryLSWatcher : NSObject
{
    PKDiscoveryDriver *_wdriver;	// 8 = 0x8
    id <PKApplicationWorkspaceProxy> _workspace;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000ce6f
@property(retain) id <PKApplicationWorkspaceProxy> workspace; // @synthesize workspace=_workspace;
@property __weak PKDiscoveryDriver *wdriver; // @synthesize wdriver=_wdriver;
- (void)updateWithUninstalledProxies:(id)arg1;	// IMP=0x000000000000cc8f
- (void)update;	// IMP=0x000000000000cc76
- (void)pluginsDidUninstall:(id)arg1;	// IMP=0x000000000000cb6e
- (void)pluginsDidInstall:(id)arg1;	// IMP=0x000000000000ca69
- (void)stopUpdates;	// IMP=0x000000000000ca1d
- (id)initWithDriver:(id)arg1;	// IMP=0x000000000000c8f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
