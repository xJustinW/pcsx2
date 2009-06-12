/* 
 *	Copyright (C) 2007-2009 Gabest
 *	http://www.gabest.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *   
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *   
 *  You should have received a copy of the GNU General Public License
 *  along with GNU Make; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA. 
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */

#include "stdafx.h"
#include "GSRendererOGL.h"
#include "GSCrc.h"
#include "resource.h"

GSRendererOGL::GSRendererOGL(uint8* base, bool mt, void (*irq)())
	: GSRendererHW<GSVertexOGL>(base, mt, irq, new GSDeviceOGL(), new GSTextureCacheOGL(this))
{
	InitVertexKick<GSRendererOGL>();
}

bool GSRendererOGL::Create(const string& title)
{
	if(!__super::Create(title))
		return false;

	// TODO
	
	/*
	
	if(!m_tfx.Create((GSDeviceOGL*)m_dev))
		return false;
	
	*/

	return true;
}

template<uint32 prim, uint32 tme, uint32 fst> 
void GSRendererOGL::VertexKick(bool skip)
{
	GSVertexOGL& dst = m_vl.AddTail();

	// TODO

	int count = 0;
	
	if(GSVertexOGL* v = DrawingKick<prim>(skip, count))
	{
		// TODO
	
		m_count += count;
	}
}

void GSRendererOGL::Draw(int prim, GSTexture* rt, GSTexture* ds, GSTextureCache::GSCachedTexture* tex)
{
	GSDrawingEnvironment& env = m_env;
	GSDrawingContext* context = m_context;

	// m_perfmon.Put(GSPerfMon::Prim, prims);
	m_perfmon.Put(GSPerfMon::Draw, 1);

	m_dev->BeginScene();

	// TODO

	m_dev->EndScene();
}
