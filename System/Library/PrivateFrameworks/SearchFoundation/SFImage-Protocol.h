//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol SFImage <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *accessibilityLabel;
@property(nonatomic) int cornerRoundingStyle;
@property(nonatomic) int source;
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *keyColor;
@property(copy, nonatomic) NSString *contentType;
@property(nonatomic) struct CGSize size;
@property(nonatomic) double scale;
@property(nonatomic) double cornerRadius;
@property(nonatomic) _Bool shouldCropToCircle;
@property(nonatomic) _Bool isTemplate;
@property(copy) NSData *imageData;
@end
