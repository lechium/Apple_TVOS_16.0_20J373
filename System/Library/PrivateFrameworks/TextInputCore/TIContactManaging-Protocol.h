//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/TIKeyboardActivityObserving-Protocol.h>

@class NSUUID;

@protocol TIContactManaging <TIKeyboardActivityObserving>
@property(readonly, copy, nonatomic) NSUUID *contactCollectionUUID;
- (void)unload;
- (void)getOnce:(void (^)(TIContactCollection *))arg1;
- (void)removeContactObserver:(void (^)(TIContactCollection *))arg1;
- (void (^)(TIContactCollection *))addContactObserver:(void (^)(TIContactCollection *))arg1;
@end

