//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRVirtualVoiceInputDevice.h>

@class MRDMediaRemoteClient;

@interface MRDVirtualAudioInputServerDevice : MRVirtualVoiceInputDevice
{
    MRDMediaRemoteClient *_owningClient;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000044d40
// Error: Property attributes should begin with the type ('T') attribute, property name: owningClient
// Property attributes: (null)

- (id)initWithOwningClient:(id)arg1;	// IMP=0x0010000000044cb2

@end
