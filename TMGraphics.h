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


typedef struct _TMAxisRange
{
	CGFloat location;
	CGFloat length;
} TMAxisRange;

TMAxisRange TMMakeAxisRange(CGFloat location, CGFloat length);
TMAxisRange TMIntersectionAxisRange(TMAxisRange aRange, TMAxisRange bRange);

void TMFillPatternInRect(NSImage *image, NSRect r);
