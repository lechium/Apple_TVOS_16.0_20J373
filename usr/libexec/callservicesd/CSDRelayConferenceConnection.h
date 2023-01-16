//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDIDSTransport, NSString, VCCapabilities;
@protocol CSDAVConference;

@interface CSDRelayConferenceConnection : NSObject
{
    _Bool _host;	// 8 = 0x8
    _Bool _usingBaseband;	// 9 = 0x9
    _Bool _audioDisabled;	// 10 = 0xa
    _Bool _receivedSuccessfulDidStart;	// 11 = 0xb
    _Bool _preparedToStop;	// 12 = 0xc
    NSString *_identifier;	// 16 = 0x10
    CSDIDSTransport *_transport;	// 24 = 0x18
    CDUnknownBlockType _didPrepareHandler;	// 32 = 0x20
    CDUnknownBlockType _didStartHandler;	// 40 = 0x28
    CDUnknownBlockType _didStopHandler;	// 48 = 0x30
    id <CSDAVConference> _conference;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000017481e
@property(retain, nonatomic) id <CSDAVConference> conference; // @synthesize conference=_conference;
@property(copy, nonatomic) CDUnknownBlockType didStopHandler; // @synthesize didStopHandler=_didStopHandler;
@property(copy, nonatomic) CDUnknownBlockType didStartHandler; // @synthesize didStartHandler=_didStartHandler;
@property(copy, nonatomic) CDUnknownBlockType didPrepareHandler; // @synthesize didPrepareHandler=_didPrepareHandler;
@property(nonatomic, getter=isPreparedToStop) _Bool preparedToStop; // @synthesize preparedToStop=_preparedToStop;
@property(nonatomic) _Bool receivedSuccessfulDidStart; // @synthesize receivedSuccessfulDidStart=_receivedSuccessfulDidStart;
@property(nonatomic, getter=isAudioDisabled) _Bool audioDisabled; // @synthesize audioDisabled=_audioDisabled;
@property(nonatomic, getter=isUsingBaseband) _Bool usingBaseband; // @synthesize usingBaseband=_usingBaseband;
@property(nonatomic, getter=isHost) _Bool host; // @synthesize host=_host;
@property(retain, nonatomic) CSDIDSTransport *transport; // @synthesize transport=_transport;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id);	// IMP=0x001000000017464c
@property(readonly, nonatomic) int deviceRole;
- (id)description;	// IMP=0x00100000001743e7
- (void)invokeDidStopIfNecessary:(_Bool)arg1 error:(id)arg2;	// IMP=0x0010000000174343
- (void)invokeDidStartIfNecessary:(_Bool)arg1 error:(id)arg2;	// IMP=0x001000000017428a
- (void)invokeDidPrepareIfNecessary:(id)arg1;	// IMP=0x00100000001741ee
- (id)init;	// IMP=0x001000000017410d
- (id)initWithCall:(id)arg1;	// IMP=0x0010000000174064
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0010000000173ff9

// Remaining properties
@property(readonly, copy, nonatomic) VCCapabilities *capabilities;

@end

