//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AFSiriAnnouncementRoute : NSObject
{
    NSString *_productID;	// 8 = 0x8
    NSString *_btAddress;	// 16 = 0x10
    unsigned long long _availableAnnouncementRequestTypes;	// 24 = 0x18
    NSDictionary *_avscRouteDescription;	// 32 = 0x20
    long long _announcePlatformForRoute;	// 40 = 0x28
    _Bool _hearingAidsAnnounceEnabled;	// 48 = 0x30
    _Bool _builtInSpeakerAnnounceEnabled;	// 49 = 0x31
    _Bool _isRouteCurrentlyPicked;	// 50 = 0x32
    _Bool _isDoAPCapable;	// 51 = 0x33
    _Bool _isHeadsetInEar;	// 52 = 0x34
    _Bool _inEarDetectSupportedSpecified;	// 53 = 0x35
    _Bool _headsetSupportsIED;	// 54 = 0x36
    _Bool _inEarDetectEnabledSpecified;	// 55 = 0x37
    _Bool _inEarDetectEnabled;	// 56 = 0x38
    _Bool _headsetSupportsAnnounce;	// 57 = 0x39
    _Bool _isTipiRoute;	// 58 = 0x3a
    _Bool _isOtherDeviceConnected;	// 59 = 0x3b
    _Bool _isInTriangleMode;	// 60 = 0x3c
    _Bool _shouldTakeRouteFromOtherConnectedDevice;	// 61 = 0x3d
    _Bool _shouldDeferToOtherConnectedDevice;	// 62 = 0x3e
    _Bool _isHearingAidsRoute;	// 63 = 0x3f
    _Bool _isBuiltInSpeakerRoute;	// 64 = 0x40
    NSString *_avAudioRouteName;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000093ced
@property(nonatomic) long long announcePlatformForRoute; // @synthesize announcePlatformForRoute=_announcePlatformForRoute;
@property(retain, nonatomic) NSDictionary *avscRouteDescription; // @synthesize avscRouteDescription=_avscRouteDescription;
@property(nonatomic) unsigned long long availableAnnouncementRequestTypes; // @synthesize availableAnnouncementRequestTypes=_availableAnnouncementRequestTypes;
@property(retain, nonatomic) NSString *btAddress; // @synthesize btAddress=_btAddress;
@property(retain, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (long long)_announcementPlatform;	// IMP=0x0010000000093c32
- (_Bool)_isHearingAidsRoute;	// IMP=0x0010000000093c2a
- (_Bool)_isBuiltInSpeakerRoute;	// IMP=0x0010000000093c22
- (unsigned long long)_getRouteCapabilities;	// IMP=0x0010000000093c1a
- (void)_initializeInternalState;	// IMP=0x0010000000093c14
- (id)initWithRouteDescription:(id)arg1 hearingAidsAnnounceEnabled:(_Bool)arg2 builtInSpeakerAnnounceEnabled:(_Bool)arg3;	// IMP=0x0010000000093be5

@end

