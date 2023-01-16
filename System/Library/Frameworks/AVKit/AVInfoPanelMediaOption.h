//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVMediaSelectionOption, MPAVRoute, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface AVInfoPanelMediaOption : NSObject
{
    NSString *_displayName;	// 8 = 0x8
    NSString *_languageCode;	// 16 = 0x10
    AVMediaSelectionOption *_mediaSelectionOption;	// 24 = 0x18
    MPAVRoute *_route;	// 32 = 0x20
    UIImage *_deviceImage;	// 40 = 0x28
    unsigned long long _selectionState;	// 48 = 0x30
}

+ (id)_nameForRoute:(id)arg1;	// IMP=0x006000000004f511
+ (id)_imageForRoute:(id)arg1;	// IMP=0x006000000004f3ec
+ (id)optionLocalDevicePreliminary;	// IMP=0x006000000004f389
+ (id)optionShareAudio;	// IMP=0x006000000004f326
+ (id)optionNormal;	// IMP=0x006000000004f2c3
+ (id)optionLateNight;	// IMP=0x006000000004f260
+ (id)optionAuto;	// IMP=0x006000000004f1fd
+ (id)optionOff;	// IMP=0x006000000004f19a
- (void).cxx_destruct;	// IMP=0x000000000004f151
@property(readonly, nonatomic) unsigned long long selectionState; // @synthesize selectionState=_selectionState;
@property(readonly, nonatomic) UIImage *deviceImage; // @synthesize deviceImage=_deviceImage;
@property(readonly, nonatomic) MPAVRoute *route; // @synthesize route=_route;
@property(readonly, nonatomic) AVMediaSelectionOption *mediaSelectionOption; // @synthesize mediaSelectionOption=_mediaSelectionOption;
@property(readonly, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)description;	// IMP=0x000000000004f0a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004f041
- (_Bool)isEqualToMediaOption:(id)arg1;	// IMP=0x000000000004eef7
- (unsigned long long)hash;	// IMP=0x000000000004ee74
- (void)updateWithRoute:(id)arg1 selectionState:(unsigned long long)arg2;	// IMP=0x000000000004ed2e
- (id)initWithMediaSelectionOption:(id)arg1;	// IMP=0x000000000004ec02
- (id)initWithDisplayName:(id)arg1;	// IMP=0x000000000004ebe5
- (id)initWithLanguageCode:(id)arg1;	// IMP=0x000000000004eb2c
- (id)initWithLanguageCode:(id)arg1 displayName:(id)arg2 mediaSelectionOption:(id)arg3;	// IMP=0x000000000004eb17
- (id)initWithLanguageCode:(id)arg1 displayName:(id)arg2 mediaSelectionOption:(id)arg3 route:(id)arg4;	// IMP=0x000000000004ea02

@end
