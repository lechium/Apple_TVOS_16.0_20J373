//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSArray, NSDictionary;

@protocol TIUserModelConfigurationDelegate <NSObject>
- (NSArray *)durableCounterKeys;
- (NSDictionary *)settingsDictionary;

@optional
- (Class)userModelValuesClass;
@end

