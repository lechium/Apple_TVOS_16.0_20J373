//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AFDisambiguationInfo, NSData, NSString, SAUIListItem;

@protocol AFDisambiguationAssistancePrivate
@property(retain, nonatomic, setter=af_setDisambiguationInfo:) AFDisambiguationInfo *af_disambiguationInfo;
@property(readonly, nonatomic) NSData *af_disambiguationIdentifier;
- (SAUIListItem *)af_itemForIndexIdentifier:(NSString *)arg1;
- (NSString *)af_indexIdentifierForItem:(SAUIListItem *)arg1;
@end

