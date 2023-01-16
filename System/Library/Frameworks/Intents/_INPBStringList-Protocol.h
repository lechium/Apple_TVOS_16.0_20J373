//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBCondition, _INPBString;

@protocol _INPBStringList <NSObject>
+ (Class)dataStringType;
@property(readonly, nonatomic) unsigned long long dataStringsCount;
@property(copy, nonatomic) NSArray *dataStrings;
@property(readonly, nonatomic) _Bool hasConditionType;
@property(retain, nonatomic) _INPBCondition *conditionType;
- (_INPBString *)dataStringAtIndex:(unsigned long long)arg1;
- (void)addDataString:(_INPBString *)arg1;
- (void)clearDataStrings;
@end

