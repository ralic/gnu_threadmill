/*
	do What The Fuck you want to Public License

	Version 1.1, March 2010
	Copyright (C) 2010 Banlu Kemiyatorn.
	136 Nives 7 Jangwattana 14 Laksi Bangkok
	Everyone is permitted to copy and distribute verbatim copies
	of this license document, but changing it is not allowed.

	Ok, the purpose of this license is simple
	and you just

	DO WHAT THE FUCK YOU WANT TO.
*/

#ifndef _TMKit_Included_TMPortCell_h
#define _TMKit_Included_TMPortCell_h

#import <AppKit/AppKit.h>
#import <Threadmill/TMGraphics.h>

@interface TMPortCell : NSCell
{
	NSColor *_borderColor;
	NSColor *_backgroundColor;
	NSColor *_hilightColor;
	BOOL _handleMode;
	TMAxisRange _range;

	NSMutableArray *_pairCells;
	BOOL _connectorsAreExpanded;
	
	NSString *_portName;
	
//	NSView *_cellContent;
}
- (id) initWithName:(NSString *)aName;
- (id) initWithName:(NSString *)aTitle
	description:(NSString *)portName;
- (NSString *) name;

- (void) expandConnectors:(BOOL)shouldExpand;
- (BOOL) connectorsAreExpanded;
- (TMAxisRange) expandedRange;
- (NSColor *) backgroundColor;
- (void) setBackgroundColor:(NSColor *)aColor;
- (void) setHighlightColor:(NSColor *)aColor;
- (void) setBorderColor:(NSColor *)aColor;

- (void) setHandled:(BOOL)mode;
- (BOOL) isHandled;


- (NSArray *) pairs;
@end


@interface TMExportCell : TMPortCell
@end

@interface TMImportCell : TMPortCell
- (CGFloat) connectionHeightForExportCell:(TMExportCell *)exportCell;
@end

#endif
