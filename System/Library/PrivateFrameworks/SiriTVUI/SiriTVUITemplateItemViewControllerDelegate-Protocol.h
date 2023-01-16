//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriTVUI/NSObject-Protocol.h>

@class NSArray, NSIndexPath, SiriTVUITemplateItem, SiriTVUITemplateItemViewController;
@protocol SAServerBoundCommand;

@protocol SiriTVUITemplateItemViewControllerDelegate <NSObject>
@property(readonly, nonatomic) struct UIEdgeInsets contentMargins;
@property(readonly, nonatomic) double fullScreenFraction;
- (void)templateItemViewController:(SiriTVUITemplateItemViewController *)arg1 performAceCommands:(NSArray *)arg2;
- (void)templateItemViewController:(SiriTVUITemplateItemViewController *)arg1 highlightTemplateItem:(SiriTVUITemplateItem *)arg2 atIndexPath:(NSIndexPath *)arg3 hasStopped:(_Bool)arg4;

@optional
- (void)templateItemViewController:(SiriTVUITemplateItemViewController *)arg1 selectTemplateItem:(SiriTVUITemplateItem *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)templateItemViewController:(SiriTVUITemplateItemViewController *)arg1 updateLayoutOffsetsForHighlightedItemInViewController:(SiriTVUITemplateItemViewController *)arg2;
- (void)templateItemViewController:(SiriTVUITemplateItemViewController *)arg1 presentModalWithFetchContentCommand:(id <SAServerBoundCommand>)arg2;
@end
