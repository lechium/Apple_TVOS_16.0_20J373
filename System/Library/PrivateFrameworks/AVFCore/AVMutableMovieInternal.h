//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVDispatchOnce, NSData, NSDictionary, NSMutableArray, NSURL;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface AVMutableMovieInternal : NSObject
{
    struct OpaqueFigMutableMovie *figMutableMovie;	// 8 = 0x8
    struct OpaqueFigFormatReader *formatReader;	// 16 = 0x10
    struct OpaqueFigAsset *figAsset;	// 24 = 0x18
    NSURL *URL;	// 32 = 0x20
    NSData *data;	// 40 = 0x28
    NSDictionary *initializationOptions;	// 48 = 0x30
    NSObject<OS_dispatch_semaphore> *trackWaitingSemaphore;	// 56 = 0x38
    NSObject<OS_dispatch_semaphore> *metadataWaitingSemaphore;	// 64 = 0x40
    NSMutableArray *tracks;	// 72 = 0x48
    AVDispatchOnce *makeTracksArrayOnce;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000013e95d

@end

