//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSClientChannelManager : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x004000000005d3a0
- (CDUnknownBlockType)_getClientChannelconnectHandlerForDestination:(id)arg1;	// IMP=0x004000000005d610
- (id)_getPendingClientUUIDForDestination:(id)arg1;	// IMP=0x001000000005d580
- (id)_getClientUUIDForDestination:(id)arg1;	// IMP=0x001000000005d4f0
- (_Bool)unregisterClientChannelDestination:(id)arg1 clientUUID:(id)arg2;	// IMP=0x001000000005d480
- (_Bool)registerClientChannelDestination:(id)arg1 connectHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005d410
- (id)initForTesting;	// IMP=0x001000000005d3e0
- (id)init;	// IMP=0x001000000005d3b0

@end
