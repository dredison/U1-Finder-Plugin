/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Cocoa/Cocoa.h>

@interface TContextMenu : NSMenu
{
}

+ (BOOL)handleEventAsRightClick:(id)arg1 targetObject:(id)arg2;

+ (void)handleContextMenuCommon:(unsigned int)arg1 nodes:(const struct TFENodeVector *)arg2 event:(id)arg3 view:(id)arg4 windowController:(id)arg5 addPlugIns:(BOOL)arg6; // Lion
+ (void)handleContextMenuCommon:(unsigned int)arg1 nodes:(const struct TFENodeVector *)arg2 event:(id)arg3 view:(id)arg4 browserController:(id)arg5 addPlugIns:(BOOL)arg6; // Mountain Lion

+ (void)buildContextMenu:(id)arg1 forContext:(unsigned int)arg2 target:(id)arg3 maxItems:(unsigned long long)arg4 addServices:(BOOL)arg5;
+ (void)addViewSpecificStuffToMenu:(id)arg1 browserViewController:(id)arg2 context:(unsigned int)arg3;
+ (void)populateActionMenu:(id)arg1 forWindowController:(id)arg2;
+ (void)contextMenuClickedOnContainer:(const struct TFENode *)arg1 event:(id)arg2 view:(id)arg3 windowController:(id)arg4;
+ (void)contextMenuClickedOnNodes:(const struct TFENodeVector *)arg1 event:(id)arg2 view:(id)arg3 windowController:(id)arg4;
+ (BOOL)allowContextualMenuForEvent:(id)arg1;
+ (void)clearContextMenuState;
+ (id)contextMenuWithDelegate:(id)arg1;
- (void)menuDidCompleteInteraction:(id)arg1;
- (void)configureForPathbarWithNode:(const struct TFENode *)arg1 windowController:(id)arg2;
- (void)configureForSidebarWithNode:(const struct TFENode *)arg1 windowController:(id)arg2 constrained:(BOOL)arg3 data:(id)arg4;

- (void)configureWithNodes:(const struct TFENodeVector *)arg1 windowController:(id)arg2 container:(BOOL)arg3; // Lion
- (void)configureWithNodes:(const struct TFENodeVector *)arg1 browserController:(id)arg2 container:(BOOL)arg3; // Mountain Lion

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)initWithObject:(id)arg1 nodes:(const struct TFENodeVector *)arg2 event:(id)arg3;
- (id)initWithTitle:(id)arg1;

@end

