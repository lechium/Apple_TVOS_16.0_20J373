//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VideoAttributes;

__attribute__((visibility("hidden")))
@interface VCRemoteVideoState : NSObject
{
    _Bool _hasReceivedFirstFrame;	// 8 = 0x8
    _Bool _isVideoPaused;	// 9 = 0x9
    _Bool _isMediaStalled;	// 10 = 0xa
    _Bool _isVideoDegraded;	// 11 = 0xb
    _Bool _isVideoSuspended;	// 12 = 0xc
    VideoAttributes *_remoteScreenAttributes;	// 16 = 0x10
    VideoAttributes *_remoteVideoAttributes;	// 24 = 0x18
    NSString *_localInterfaceType;	// 32 = 0x20
    NSString *_remoteInterfaceType;	// 40 = 0x28
}

@property _Bool isVideoSuspended; // @synthesize isVideoSuspended=_isVideoSuspended;
@property(copy, nonatomic) NSString *remoteInterfaceType; // @synthesize remoteInterfaceType=_remoteInterfaceType;
@property(copy, nonatomic) NSString *localInterfaceType; // @synthesize localInterfaceType=_localInterfaceType;
@property(retain) VideoAttributes *remoteVideoAttributes; // @synthesize remoteVideoAttributes=_remoteVideoAttributes;
@property(retain) VideoAttributes *remoteScreenAttributes; // @synthesize remoteScreenAttributes=_remoteScreenAttributes;
@property _Bool isMediaStalled; // @synthesize isMediaStalled=_isMediaStalled;
@property _Bool isVideoPaused; // @synthesize isVideoPaused=_isVideoPaused;
@property _Bool isVideoDegraded; // @synthesize isVideoDegraded=_isVideoDegraded;
@property _Bool hasReceivedFirstFrame; // @synthesize hasReceivedFirstFrame=_hasReceivedFirstFrame;
- (id)description;	// IMP=0x000000000026b9cd
- (void)dealloc;	// IMP=0x000000000026b952

@end

