//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBGetSettingResponseData;

@protocol _INPBGetSettingIntentResponse <NSObject>
+ (Class)settingResponseDataType;
@property(readonly, nonatomic) unsigned long long settingResponseDatasCount;
@property(copy, nonatomic) NSArray *settingResponseDatas;
@property(readonly, nonatomic) _Bool hasErrorDetail;
@property(copy, nonatomic) NSString *errorDetail;
- (_INPBGetSettingResponseData *)settingResponseDataAtIndex:(unsigned long long)arg1;
- (void)addSettingResponseData:(_INPBGetSettingResponseData *)arg1;
- (void)clearSettingResponseDatas;
@end

