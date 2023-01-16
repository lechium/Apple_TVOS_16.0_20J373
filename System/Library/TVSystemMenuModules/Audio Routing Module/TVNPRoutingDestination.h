//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, UIImage;

@interface TVNPRoutingDestination : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_subtitle;	// 16 = 0x10
    NSString *_singleLineTitle;	// 24 = 0x18
    UIImage *_artworkImage;	// 32 = 0x20
    UIImage *_deviceImage;	// 40 = 0x28
    NSString *_destinationName;	// 48 = 0x30
    _Bool _isCurrentDestination;	// 56 = 0x38
    _Bool _local;	// 57 = 0x39
    unsigned long long _playbackState;	// 64 = 0x40
    unsigned long long _effectiveDeviceType;	// 72 = 0x48
    NSString *_uniqueIdentifier;	// 80 = 0x50
    NSNumber *_volumeLevel;	// 88 = 0x58
    _Bool _muted;	// 96 = 0x60
    NSString *_nowPlayingBundleIdentifier;	// 104 = 0x68
    NSArray *_routeNames;	// 112 = 0x70
    _Bool _paired;	// 120 = 0x78
    _Bool _connected;	// 121 = 0x79
    _Bool _connecting;	// 122 = 0x7a
    _Bool _disconnected;	// 123 = 0x7b
}

- (void).cxx_destruct;	// IMP=0x000000000002fdf0
@property(readonly, nonatomic, getter=isDisconnected) _Bool disconnected; // @synthesize disconnected=_disconnected;
@property(readonly, nonatomic, getter=isConnecting) _Bool connecting; // @synthesize connecting=_connecting;
@property(readonly, nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(readonly, nonatomic, getter=isPaired) _Bool paired; // @synthesize paired=_paired;
@property(readonly, nonatomic) unsigned long long effectiveDeviceType; // @synthesize effectiveDeviceType=_effectiveDeviceType;
@property(copy, nonatomic) NSArray *routeNames; // @synthesize routeNames=_routeNames;
@property(copy, nonatomic) NSString *nowPlayingBundleIdentifier; // @synthesize nowPlayingBundleIdentifier=_nowPlayingBundleIdentifier;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(copy, nonatomic) NSNumber *volumeLevel; // @synthesize volumeLevel=_volumeLevel;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(nonatomic) unsigned long long playbackState; // @synthesize playbackState=_playbackState;
@property(readonly, nonatomic, getter=isLocal) _Bool local; // @synthesize local=_local;
@property(nonatomic) _Bool isCurrentDestination; // @synthesize isCurrentDestination=_isCurrentDestination;
@property(copy, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property(retain, nonatomic) UIImage *deviceImage; // @synthesize deviceImage=_deviceImage;
@property(retain, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
@property(copy, nonatomic) NSString *singleLineTitle; // @synthesize singleLineTitle=_singleLineTitle;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)refreshPropertiesWithRoute:(id)arg1;	// IMP=0x000000000002f8f0
- (void)connectAndPair;	// IMP=0x000000000002f8e0
- (void)togglePlayPause;	// IMP=0x000000000002f8d0
- (id)initWithEndpointRoute:(id)arg1;	// IMP=0x000000000002f830
- (id)init;	// IMP=0x000000000002f800

@end

