//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputTestingKit/NSObject-Protocol.h>

@protocol TIKeyboardActivityObserving;

@protocol TIKeyboardActivityControlling <NSObject>
@property(readonly, nonatomic) unsigned long long activityState;
- (void)removeActivityObserver:(id <TIKeyboardActivityObserving>)arg1;
- (void)addActivityObserver:(id <TIKeyboardActivityObserving>)arg1;
@end

