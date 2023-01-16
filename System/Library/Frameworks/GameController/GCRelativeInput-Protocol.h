//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/NSObject-Protocol.h>

@protocol GCRelativeInput <NSObject>
@property(readonly) double lastDeltaLatency;
@property(readonly) double lastDeltaTimestamp;
@property(readonly, getter=isAnalog) _Bool analog;
@property(readonly) float delta;
@property(copy) CDUnknownBlockType deltaDidChangeHandler;
@end

