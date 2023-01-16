//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject-Protocol.h>

@class NSError, NSObservation;
@protocol NSObservable><NSObserver, NSObserver;

@protocol NSObservable <NSObject>

@optional
- (void)finishObserving;
- (void)receiveObservedError:(NSError *)arg1;
- (void)receiveObservedValue:(id)arg1;
- (void)removeObservation:(NSObservation *)arg1;
- (NSObservation<NSObservable><NSObserver> *)addObserver:(id <NSObserver>)arg1;
@end

