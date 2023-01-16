//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSArray, NSDictionary, TILanguageModelOfflineLearningTask;

@protocol TILanguageModelOfflineLearningStrategy <NSObject>
@property(readonly) TILanguageModelOfflineLearningTask *learningTask;
- (void)didFinishLearning;
- (NSArray *)filterMessages:(NSArray *)arg1;
- (_Bool)learnMessages:(NSArray *)arg1 withRecipientRecords:(NSDictionary *)arg2;
@end

