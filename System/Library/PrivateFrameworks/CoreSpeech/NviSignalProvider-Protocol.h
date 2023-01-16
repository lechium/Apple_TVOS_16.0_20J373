//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class NviContext;
@protocol NviAssetsProvider, NviDataSource, NviSignalProviderDelegate;

@protocol NviSignalProvider <NSObject>
@property(readonly, nonatomic) unsigned long long sigType;
- (void)stopWithDidStopHandler:(void (^)(_Bool, NSError *))arg1;
- (void)reset;
- (void)startWithNviContext:(NviContext *)arg1 didStartHandler:(void (^)(_Bool, NSError *))arg2;
- (void)removeDelegate:(id <NviSignalProviderDelegate>)arg1;
- (void)addDelegate:(id <NviSignalProviderDelegate>)arg1;
- (id)initWithDataSource:(id <NviDataSource>)arg1 assetsProvider:(id <NviAssetsProvider>)arg2;
@end

