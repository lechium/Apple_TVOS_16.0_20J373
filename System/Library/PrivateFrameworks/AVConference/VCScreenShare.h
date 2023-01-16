//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VCScreenShare : NSObject
{
    _Bool _isWindowed;	// 8 = 0x8
    unsigned int _height;	// 12 = 0xc
    unsigned int _width;	// 16 = 0x10
    unsigned int _frameRate;	// 20 = 0x14
    unsigned int _screenCaptureDisplayID;	// 24 = 0x18
    unsigned int _selectiveSharingPort;	// 28 = 0x1c
    NSNumber *_clientPID;	// 32 = 0x20
    NSString *_selectiveScreenUUID;	// 40 = 0x28
}

@property(retain, nonatomic) NSString *selectiveScreenUUID; // @synthesize selectiveScreenUUID=_selectiveScreenUUID;
@property(readonly, nonatomic) unsigned int selectiveSharingPort; // @synthesize selectiveSharingPort=_selectiveSharingPort;
@property(readonly, nonatomic) _Bool isWindowed; // @synthesize isWindowed=_isWindowed;
@property(retain, nonatomic) NSNumber *clientPID; // @synthesize clientPID=_clientPID;
@property(readonly, nonatomic) unsigned int screenCaptureDisplayID; // @synthesize screenCaptureDisplayID=_screenCaptureDisplayID;
@property(readonly, nonatomic) unsigned int frameRate; // @synthesize frameRate=_frameRate;
@property(readonly, nonatomic) unsigned int width; // @synthesize width=_width;
@property(readonly, nonatomic) unsigned int height; // @synthesize height=_height;
- (void)setConfig:(id)arg1 pid:(id)arg2;	// IMP=0x00000000003a3c91
- (void)updateScreenShareWith:(id)arg1 pid:(id)arg2;	// IMP=0x00000000003a3c7f
- (void)dealloc;	// IMP=0x00000000003a3c05
- (id)initWithConfig:(id)arg1 pid:(id)arg2;	// IMP=0x00000000003a3b82

@end

