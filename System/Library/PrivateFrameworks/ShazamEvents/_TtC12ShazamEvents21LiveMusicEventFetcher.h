//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol SHWorkerDelegate;

__attribute__((visibility("hidden")))
@interface _TtC12ShazamEvents21LiveMusicEventFetcher : NSObject
{
    MISSING_TYPE *workerDelegate;	// 8 = 0x8
    MISSING_TYPE *_isRunning;	// 16 = 0x10
    MISSING_TYPE *urlSession;	// 24 = 0x18
    MISSING_TYPE *$__lazy_storage_$_encoder;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000fdb0
- (id)init;	// IMP=0x000000000000fd60
- (double)timeRequiredToPerformWork;	// IMP=0x000000000000fc50
- (void)stop;	// IMP=0x000000000000fc30
@property(nonatomic, readonly) _Bool managesRecordingSession;
@property(nonatomic) _Bool isRunning;
@property(nonatomic, retain) id <SHWorkerDelegate> workerDelegate; // @synthesize workerDelegate;

@end

