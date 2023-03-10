//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@protocol FSFCurareInteraction
+ (id)deserialize:(NSData *)arg1 dataVersion:(unsigned int)arg2 interactionId:(NSString *)arg3;
@property(nonatomic, readonly) unsigned int dataVersion;
@property(nonatomic, readonly) NSString *interactionId;
- (NSString *)json;
- (NSData *)serialize;
@end

